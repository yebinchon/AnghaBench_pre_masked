
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct necp_fd_data {int flags; scalar_t__ update_count; int update_list; } ;
struct necp_client_update {scalar_t__ update_length; int update; int * client_id; } ;
struct necp_client_action_args {int client_id_len; scalar_t__ buffer_size; int buffer; int client_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct necp_client_update*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct necp_fd_data*) ;
 int FUNC_4 (struct necp_fd_data*) ;
 int VAR_4 ;
 struct necp_client_update* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct necp_client_update*,int ) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct necp_fd_data *VAR_6, struct necp_client_action_args *VAR_7, int *VAR_8)
{
 int VAR_9 = 0;

 *VAR_8 = 0;

 if (!(VAR_6->flags & VAR_4)) {
  FUNC_2(VAR_2, "NECP fd is not observer, cannot copy client update");
  return (VAR_0);
 }

 if (VAR_7->client_id_len != sizeof(uuid_t) || VAR_7->client_id == 0) {
  FUNC_2(VAR_2, "Client id invalid, cannot copy client update");
  return (VAR_0);
 }

 if (VAR_7->buffer_size == 0 || VAR_7->buffer == 0) {
  FUNC_2(VAR_2, "Buffer invalid, cannot copy client update");
  return (VAR_0);
 }

 FUNC_3(VAR_6);
 struct necp_client_update *VAR_10 = FUNC_5(&VAR_6->update_list);
 if (VAR_10 != ((void*)0)) {
  FUNC_6(&VAR_6->update_list, VAR_10, VAR_5);
  FUNC_7(VAR_6->update_count > 0);
  VAR_6->update_count--;
 }
 FUNC_4(VAR_6);

 if (VAR_10 != ((void*)0)) {
  VAR_9 = FUNC_8(VAR_10->client_id, VAR_7->client_id, sizeof(uuid_t));
  if (VAR_9) {
   FUNC_1(VAR_2, "Copy client update copyout client id error (%d)", VAR_9);
  } else {
   if (VAR_7->buffer_size < VAR_10->update_length) {
    FUNC_1(VAR_2, "Buffer size cannot hold update (%zu < %zu)", VAR_7->buffer_size, VAR_10->update_length);
    VAR_9 = VAR_0;
   } else {
    VAR_9 = FUNC_8(&VAR_10->update, VAR_7->buffer, VAR_10->update_length);
    if (VAR_9) {
     FUNC_1(VAR_2, "Copy client update copyout error (%d)", VAR_9);
    } else {
     *VAR_8 = VAR_10->update_length;
    }
   }
  }

  FUNC_0(VAR_10, VAR_3);
  VAR_10 = ((void*)0);
 } else {
  VAR_9 = VAR_1;
 }

 return (VAR_9);
}

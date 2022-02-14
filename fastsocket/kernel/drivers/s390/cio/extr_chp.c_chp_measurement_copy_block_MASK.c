
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmg_entry {scalar_t__* values; } ;
struct chp_id {int id; } ;
struct channel_subsystem {void* cub_addr2; void* cub_addr1; } ;


 int FUNC_0 (struct cmg_entry*,struct cmg_entry*,int) ;

__attribute__((used)) static void FUNC_1(struct cmg_entry *VAR_0,
           struct channel_subsystem *VAR_1,
           struct chp_id VAR_2)
{
 void *VAR_3;
 struct cmg_entry *VAR_4, VAR_5;
 int VAR_6;

 if (VAR_2.id < 128) {
  VAR_3 = VAR_1->cub_addr1;
  VAR_6 = VAR_2.id;
 } else {
  VAR_3 = VAR_1->cub_addr2;
  VAR_6 = VAR_2.id - 128;
 }
 VAR_4 = VAR_3 + (VAR_6 * sizeof(struct cmg_entry));
 do {
  FUNC_0(VAR_0, VAR_4, sizeof(*VAR_4));
  FUNC_0(&VAR_5, VAR_4, sizeof(*VAR_4));
 } while (VAR_5.values[0] != VAR_0->values[0]);
}

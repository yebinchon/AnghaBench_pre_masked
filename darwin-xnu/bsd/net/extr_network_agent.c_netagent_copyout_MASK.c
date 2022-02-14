
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
typedef int user_addr_t ;
typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {scalar_t__ netagent_data_size; } ;
struct netagent_wrapper {TYPE_1__ netagent; } ;
struct netagent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct netagent_wrapper* FUNC_5 (int ) ;
 int VAR_4 ;

int
FUNC_6(uuid_t VAR_5, user_addr_t VAR_6, u_int32_t VAR_7)
{
 int VAR_8 = 0;

 FUNC_4(&VAR_4);
 struct netagent_wrapper *VAR_9 = FUNC_5(VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_2, "Requested netagent for nexus instance could not be found");
  VAR_8 = VAR_1;
  goto done;
 }

 u_int32_t VAR_10 = (sizeof(struct netagent) + VAR_9->netagent.netagent_data_size);
 if (VAR_7 < VAR_10) {
  FUNC_0(VAR_3, "Provided user buffer is too small (%u < %u)", VAR_7, VAR_10);
  VAR_8 = VAR_0;
  goto done;
 }

 VAR_8 = FUNC_2(&VAR_9->netagent, VAR_6, VAR_10);

 FUNC_0((VAR_8 ? VAR_3 : VAR_2), "Copied agent content (error %d)", VAR_8);
done:
 FUNC_3(&VAR_4);
 return (VAR_8);
}

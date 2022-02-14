
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int use_count ;
typedef int uint64_t ;
typedef int u_int8_t ;
struct netagent_session {TYPE_1__* wrapper; } ;
typedef int errno_t ;
struct TYPE_2__ {int use_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_3 ;

errno_t
FUNC_5(struct netagent_session *VAR_4, u_int8_t *VAR_5, size_t *VAR_6)
{
 errno_t VAR_7 = 0;
 uint64_t VAR_8 = 0;

 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_2, "Failed to find session");
  VAR_7 = VAR_1;
  goto done;
 }

 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_2, "No payload received");
  VAR_7 = VAR_0;
  goto done;
 }

 if (*VAR_6 != sizeof(VAR_8)) {
  FUNC_0(VAR_2, "Buffer length is invalid (%lu)", *VAR_6);
  VAR_7 = VAR_0;
  goto done;
 }

 FUNC_3(&VAR_3);

 if (VAR_4->wrapper == ((void*)0)) {
  FUNC_1(VAR_2, "Session has no agent registered");
  VAR_7 = VAR_1;
  FUNC_2(&VAR_3);
  goto done;
 }

 VAR_8 = VAR_4->wrapper->use_count;
 FUNC_2(&VAR_3);

 FUNC_4(VAR_5, &VAR_8, sizeof(VAR_8));
 *VAR_6 = sizeof(VAR_8);

done:
 return VAR_7;
}

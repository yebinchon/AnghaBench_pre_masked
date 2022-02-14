
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lck_grp_attr_t ;
struct TYPE_2__ {unsigned int logical_cpu_max; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned int) ;
 unsigned int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int *) ;
 TYPE_1__ VAR_8 ;

int
FUNC_6(void)
{
 static lck_grp_attr_t VAR_9;

 unsigned VAR_10 = 0;
 int VAR_11;

 if (VAR_5) {
  return 0;
 }

 FUNC_4(&VAR_9);
 FUNC_5(&VAR_6, "kperf", &VAR_9);

 VAR_10 = VAR_8.logical_cpu_max;


 VAR_7 = FUNC_1(VAR_10 * sizeof(*VAR_7),
                                   VAR_2);
 if (VAR_7 == ((void*)0)) {
  VAR_11 = VAR_0;
  goto error;
 }
 FUNC_0(VAR_7, VAR_10 * sizeof(*VAR_7));


 VAR_3 = VAR_10;
 VAR_4 = FUNC_1(VAR_10 * sizeof(*VAR_4),
                           VAR_2);
 if (VAR_4 == ((void*)0)) {
  VAR_11 = VAR_0;
  goto error;
 }
 FUNC_0(VAR_4, VAR_10 * sizeof(*VAR_4));


 if ((VAR_11 = FUNC_3())) {
  goto error;
 }

 VAR_5 = VAR_1;
 return 0;

error:
 if (VAR_4) {
  FUNC_2(VAR_4, VAR_10 * sizeof(*VAR_4));
  VAR_4 = ((void*)0);
  VAR_3 = 0;
 }

 if (VAR_7) {
  FUNC_2(VAR_7, VAR_10 * sizeof(*VAR_7));
  VAR_7 = ((void*)0);
 }

 return VAR_11;
}

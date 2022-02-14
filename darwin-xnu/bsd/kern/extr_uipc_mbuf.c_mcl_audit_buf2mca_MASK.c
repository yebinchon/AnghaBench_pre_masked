
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mcache_obj_t ;
typedef int mcache_audit_t ;
typedef int mbuf_class_t ;
struct TYPE_2__ {int ** cl_audit; } ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (unsigned char*,int *) ;




 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned char* FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static mcache_audit_t *
FUNC_9(mbuf_class_t VAR_6, mcache_obj_t *VAR_7)
{
 mcache_audit_t *VAR_8 = ((void*)0);
 int VAR_9 = FUNC_5(VAR_7), VAR_10 = 0;
 unsigned char *VAR_11;

 FUNC_7(VAR_9 < VAR_4);
 FUNC_7(FUNC_2(VAR_7, FUNC_4(FUNC_8(VAR_6), VAR_3)));

 VAR_11 = FUNC_6(VAR_9);

 switch (VAR_6) {
 case 128:







  VAR_10 = FUNC_3(VAR_11, VAR_7);
  FUNC_7(VAR_10 < (int)VAR_2);
  VAR_8 = VAR_5[VAR_9].cl_audit[VAR_10];
  break;

 case 129:



  VAR_10 = FUNC_1(VAR_11, VAR_7);
  FUNC_7(VAR_10 < (int)VAR_1);
  VAR_8 = VAR_5[VAR_9].cl_audit[VAR_10];
  break;

 case 130:
  VAR_10 = FUNC_0(VAR_11, VAR_7);
  FUNC_7(VAR_10 < (int)VAR_0);
  VAR_8 = VAR_5[VAR_9].cl_audit[VAR_10];
  break;
 case 131:



  VAR_8 = VAR_5[VAR_9].cl_audit[0];
  break;

 default:
  FUNC_7(0);

 }

 return (VAR_8);
}

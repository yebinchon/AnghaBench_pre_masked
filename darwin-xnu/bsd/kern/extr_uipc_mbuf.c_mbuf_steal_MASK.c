
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mcache_obj_t ;
typedef int mbuf_class_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;







 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int,int ***,int ) ;
 int FUNC_4 (int,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_7(mbuf_class_t VAR_3, unsigned int VAR_4)
{
 mcache_obj_t *VAR_5 = ((void*)0);
 mcache_obj_t **VAR_6 = &VAR_5;
 unsigned int VAR_7 = 0;

 FUNC_0(VAR_2, VAR_1);

 switch (VAR_3) {
 case 131:
 case 132:
 case 133:
 case 134:
  return (VAR_0);

 case 128:
 case 129:
 case 130:

  if (FUNC_5(VAR_3) > FUNC_6(VAR_3)) {
   VAR_7 = FUNC_3(VAR_3, &VAR_6,
       FUNC_1(VAR_4, FUNC_5(VAR_3)));
  }


  if (VAR_5 != ((void*)0))
   (void) FUNC_4(VAR_3, VAR_5, 1);
  break;

 default:
  FUNC_2(0);

 }

 return (VAR_7 == VAR_4);
}

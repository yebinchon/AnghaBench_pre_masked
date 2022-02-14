
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct char_device_struct {unsigned int major; unsigned int baseminor; int minorct; struct char_device_struct* next; } ;


 struct char_device_struct** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct char_device_struct *
FUNC_3(unsigned VAR_2, unsigned VAR_3, int VAR_4)
{
 struct char_device_struct *VAR_5 = ((void*)0), **VAR_6;
 int VAR_7 = FUNC_0(VAR_2);

 FUNC_1(&VAR_1);
 for (VAR_6 = &VAR_0[VAR_7]; *VAR_6; VAR_6 = &(*VAR_6)->next)
  if ((*VAR_6)->major == VAR_2 &&
      (*VAR_6)->baseminor == VAR_3 &&
      (*VAR_6)->minorct == VAR_4)
   break;
 if (*VAR_6) {
  VAR_5 = *VAR_6;
  *VAR_6 = VAR_5->next;
 }
 FUNC_2(&VAR_1);
 return VAR_5;
}

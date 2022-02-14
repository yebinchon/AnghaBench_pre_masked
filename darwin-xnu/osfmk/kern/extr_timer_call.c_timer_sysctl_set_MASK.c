
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_2__ {void* scan_interval; void* scan_limit; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,void (*) (void*),void*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

int
FUNC_1(int VAR_5, uint64_t VAR_6)
{
 switch (VAR_5) {
 case 128:
  FUNC_0(
   VAR_2,
   (void (*)(void *)) VAR_4,
   (void *) VAR_6);
  return VAR_1;
 case 129:
  VAR_3.scan_limit = VAR_6;
  return VAR_1;
 case 130:
  VAR_3.scan_interval = VAR_6;
  return VAR_1;
 default:
  return VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int* status_ptr; int event_counter; int event_wrap; } ;
typedef TYPE_1__ drm_savage_private_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

uint16_t FUNC_2(drm_savage_private_t * VAR_7,
          unsigned int VAR_8)
{
 uint16_t VAR_9;
 VAR_4;

 if (VAR_7->status_ptr) {

  VAR_9 = VAR_7->status_ptr[1023];
  if (VAR_9 < VAR_7->event_counter)
   VAR_7->event_wrap++;
 } else {
  VAR_9 = VAR_7->event_counter;
 }
 VAR_9 = (VAR_9 + 1) & 0xffff;
 if (VAR_9 == 0) {
  VAR_9++;
  VAR_7->event_wrap++;
 }
 VAR_7->event_counter = VAR_9;
 if (VAR_7->status_ptr)
  VAR_7->status_ptr[1023] = (uint32_t) VAR_9;

 if ((VAR_8 & (VAR_5 | VAR_6))) {
  unsigned int VAR_10 = VAR_1;
  if ((VAR_8 & VAR_5))
   VAR_10 |= VAR_2;
  if ((VAR_8 & VAR_6))
   VAR_10 |= VAR_3;
  FUNC_1(2);
  FUNC_0(VAR_10);
 } else {
  FUNC_1(1);
 }
 FUNC_0(VAR_0 | (uint32_t) VAR_9);

 return VAR_9;
}

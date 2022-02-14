
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kevent_internal_s {int fflags; scalar_t__ data; scalar_t__* ext; } ;
struct filt_timer_params {int leeway; int deadline; int interval; } ;
typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (scalar_t__*,int*) ;
 int FUNC_3 (int,int*) ;
 scalar_t__ FUNC_4 (int,int,int*) ;

__attribute__((used)) static int
FUNC_5(const struct kevent_internal_s *VAR_9,
  struct filt_timer_params *VAR_10)
{
 uint64_t VAR_11;

 boolean_t VAR_12 = VAR_2;

 switch (VAR_9->fflags & (129|128|130|131)) {
 case 129:
  VAR_11 = VAR_6;
  break;
 case 128:
  VAR_11 = VAR_7;
  break;
 case 130:
  VAR_11 = 1;
  break;
 case 131:
  VAR_11 = 0;
  VAR_12 = VAR_8;
  break;
 case 0:
  VAR_11 = VAR_6 / 1000;
  break;
 default:
  return (VAR_0);
 }


 if (VAR_9->fflags & VAR_4) {
  uint64_t VAR_13;

  if (VAR_12) {
   VAR_13 = (uint64_t)VAR_9->ext[1];
  } else {
   uint64_t VAR_14;
   if (FUNC_4((uint64_t)VAR_9->ext[1], VAR_11, &VAR_14))
    return (VAR_1);

   FUNC_3(VAR_14, &VAR_13);
  }

  VAR_10->leeway = VAR_13;
 } else {
  VAR_10->leeway = 0;
 }

 if (VAR_9->fflags & VAR_3) {
  uint64_t VAR_15;

  if (VAR_12) {
   VAR_15 = (uint64_t)VAR_9->data;
  } else {
   uint64_t VAR_16;

   if (FUNC_4((uint64_t)VAR_9->data, VAR_11, &VAR_16))
    return (VAR_1);



   clock_sec_t VAR_17;
   clock_nsec_t VAR_18;
   FUNC_2(&VAR_17, &VAR_18);

   uint64_t VAR_19 = (uint64_t)VAR_17 * VAR_6 + VAR_18;


   if (VAR_19 < VAR_16) {
    uint64_t VAR_20 = VAR_16 - VAR_19;
    uint64_t VAR_21;

    FUNC_3(VAR_20, &VAR_21);







    if (VAR_9->fflags & VAR_5)
     FUNC_1(VAR_21,
                                               &VAR_15);
    else
     FUNC_0(VAR_21,
                                             &VAR_15);
   } else {
    VAR_15 = 0;
   }
  }

  VAR_10->deadline = VAR_15;
  VAR_10->interval = 0;
 } else if (VAR_9->data < 0) {
  VAR_10->deadline = 0;
  VAR_10->interval = 0;
 } else {
  uint64_t VAR_22 = 0;

  if (VAR_12) {
   VAR_22 = (uint64_t)VAR_9->data;
  } else {
   uint64_t VAR_23;
   if (FUNC_4((uint64_t)VAR_9->data, VAR_11, &VAR_23))
    return (VAR_1);

   FUNC_3(VAR_23, &VAR_22);
  }

  uint64_t VAR_24 = 0;

  if (VAR_9->fflags & VAR_5)
   FUNC_1(VAR_22, &VAR_24);
  else
   FUNC_0(VAR_22, &VAR_24);

  VAR_10->deadline = VAR_24;
  VAR_10->interval = VAR_22;
 }

 return (0);
}

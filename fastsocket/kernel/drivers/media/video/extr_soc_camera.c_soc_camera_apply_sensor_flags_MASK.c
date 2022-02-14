
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_link {int flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;

unsigned long FUNC_0(struct soc_camera_link *VAR_9,
         unsigned long VAR_10)
{
 unsigned long VAR_11;


 if (VAR_9->flags & VAR_4) {
  VAR_11 = VAR_10 & (VAR_0 | VAR_1);
  if (VAR_11 == VAR_0 || VAR_11 == VAR_1)
   VAR_10 ^= VAR_0 | VAR_1;
 }

 if (VAR_9->flags & VAR_6) {
  VAR_11 = VAR_10 & (VAR_7 | VAR_8);
  if (VAR_11 == VAR_7 || VAR_11 == VAR_8)
   VAR_10 ^= VAR_7 | VAR_8;
 }

 if (VAR_9->flags & VAR_5) {
  VAR_11 = VAR_10 & (VAR_3 | VAR_2);
  if (VAR_11 == VAR_3 || VAR_11 == VAR_2)
   VAR_10 ^= VAR_3 | VAR_2;
 }

 return VAR_10;
}

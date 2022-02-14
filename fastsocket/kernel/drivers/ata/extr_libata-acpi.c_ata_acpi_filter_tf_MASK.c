
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {scalar_t__ command; scalar_t__ feature; scalar_t__ nsect; } ;
struct ata_device {int gtf_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static int FUNC_0(struct ata_device *VAR_19,
         const struct ata_taskfile *VAR_20,
         const struct ata_taskfile *VAR_21)
{
 if (VAR_19->gtf_filter & VAR_4) {



  if (VAR_20->command == VAR_8 &&
      VAR_20->feature == VAR_18)
   return 1;
 }

 if (VAR_19->gtf_filter & VAR_3) {





  if (VAR_20->command == VAR_5 &&
      VAR_20->feature == VAR_10)
   return 1;


  if (VAR_20->command == VAR_7)
   return 1;


  if ((!VAR_21 || VAR_21->command != VAR_6) &&
      VAR_20->command == VAR_9 &&
      (VAR_20->feature == VAR_12 ||
       VAR_20->feature == VAR_11))
   return 1;
 }

 if (VAR_20->command == VAR_8 &&
     VAR_20->feature == VAR_17) {

  if (VAR_19->gtf_filter & VAR_0 &&
      VAR_20->nsect == VAR_13)
   return 1;


  if (VAR_19->gtf_filter & VAR_2 &&
      (VAR_20->nsect == VAR_16 ||
       VAR_20->nsect == VAR_15))
   return 1;


  if (VAR_19->gtf_filter & VAR_1 &&
      VAR_20->nsect == VAR_14)
   return 1;
 }

 return 0;
}

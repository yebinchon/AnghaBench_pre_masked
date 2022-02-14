
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ses_device {int* page1; unsigned char* page10; int page10_len; } ;
struct scsi_device {int dummy; } ;
struct enclosure_device {struct enclosure_component* component; struct ses_device* scratch; } ;
struct enclosure_component {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct enclosure_component*) ;
 struct enclosure_component* FUNC_1 (struct enclosure_device*,int ,unsigned char,char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (struct enclosure_component*,unsigned char*) ;
 scalar_t__ FUNC_5 (struct scsi_device*,int,unsigned char*,int) ;

__attribute__((used)) static void FUNC_6(struct enclosure_device *VAR_4,
           struct scsi_device *VAR_5,
           int VAR_6)
{
 u32 VAR_7;
 unsigned char *VAR_8 = ((void*)0), *VAR_9, *VAR_10, *VAR_11 = ((void*)0);
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 struct ses_device *VAR_17 = VAR_4->scratch;
 int VAR_18 = VAR_17->page1[10];
 unsigned char *VAR_19 = FUNC_3(VAR_3, VAR_2);

 if (!VAR_19)
  goto simple_populate;


 if (VAR_17->page10)
  FUNC_5(VAR_5, 10, VAR_17->page10, VAR_17->page10_len);

 VAR_7 = FUNC_5(VAR_5, 7, VAR_19, VAR_3);
 if (VAR_7)
  goto simple_populate;

 VAR_14 = VAR_15 = (VAR_19[2] << 8) + VAR_19[3] + 4;

 VAR_8 = FUNC_3(VAR_15 + 1, VAR_2);
 if (!VAR_8)
  goto simple_populate;
 VAR_7 = FUNC_5(VAR_5, 7, VAR_8, VAR_15);
 if (VAR_7) {
 simple_populate:
  FUNC_2(VAR_8);
  VAR_8 = ((void*)0);
  VAR_10 = ((void*)0);
  VAR_15 = 0;
  VAR_14 = 0;
 } else {
  VAR_10 = VAR_8 + 8;
  VAR_15 = (VAR_10[2] << 8) + VAR_10[3];

  VAR_10 += VAR_15 + 4;
  if (VAR_17->page10)
   VAR_11 = VAR_17->page10 + 8;
 }
 VAR_9 = VAR_17->page1 + 12 + VAR_17->page1[11];
 VAR_16 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_18; VAR_12++, VAR_9 += 4) {
  for (VAR_13 = 0; VAR_13 < VAR_9[1]; VAR_13++) {
   char *VAR_20 = ((void*)0);
   struct enclosure_component *VAR_21;

   if (VAR_10) {
    if (VAR_10 >= VAR_8 + VAR_14) {
     VAR_10 = ((void*)0);
    } else {
     VAR_15 = (VAR_10[2] << 8) + VAR_10[3];
     VAR_10 += 4;


     VAR_10[VAR_15] = '\0';
     VAR_20 = VAR_10;
    }
   }
   if (VAR_9[0] == VAR_1 ||
       VAR_9[0] == VAR_0) {

    if (VAR_6)
     VAR_21 = FUNC_1(VAR_4,
              VAR_16++,
              VAR_9[0],
              VAR_20);
    else
     VAR_21 = &VAR_4->component[VAR_16++];

    if (!FUNC_0(VAR_21) && VAR_11)
     FUNC_4(VAR_21,
              VAR_11);
   }
   if (VAR_10)
    VAR_10 += VAR_15;

   if (VAR_11)
    VAR_11 += VAR_11[1] + 2;

  }
 }
 FUNC_2(VAR_8);
 FUNC_2(VAR_19);
}

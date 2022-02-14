
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ses_device {unsigned char* page1; unsigned char* page2; scalar_t__ page2_len; } ;
struct scsi_device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct enclosure_device {struct ses_device* scratch; TYPE_1__ edev; } ;
struct enclosure_component {int number; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,scalar_t__) ;
 int FUNC_2 (struct scsi_device*,int,unsigned char*,scalar_t__) ;
 struct scsi_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct enclosure_device *VAR_2,
          struct enclosure_component *VAR_3,
          unsigned char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = VAR_3->number;
 struct scsi_device *VAR_9 = FUNC_3(VAR_2->edev.parent);
 struct ses_device *VAR_10 = VAR_2->scratch;
 unsigned char *VAR_11 = VAR_10->page1 + 12 + VAR_10->page1[11];
 unsigned char *VAR_12 = VAR_10->page2 + 8;


 FUNC_1(VAR_12, 0, VAR_10->page2_len - 8);
 for (VAR_5 = 0; VAR_5 < VAR_10->page1[10]; VAR_5++, VAR_11 += 4) {
  for (VAR_6 = 0; VAR_6 < VAR_11[1]; VAR_6++) {
   VAR_12 += 4;
   if (VAR_11[0] != VAR_1 &&
       VAR_11[0] != VAR_0)
    continue;
   if (VAR_7++ == VAR_8) {
    FUNC_0(VAR_12, VAR_4, 4);

    VAR_12[0] |= 0x80;

    VAR_12[0] &= 0xf0;
   }
  }
 }

 return FUNC_2(VAR_9, 2, VAR_10->page2, VAR_10->page2_len);
}

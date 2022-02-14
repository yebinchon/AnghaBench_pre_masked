
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ses_device {unsigned char* page1; unsigned char* page2; int page2_len; } ;
struct scsi_device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct enclosure_device {struct ses_device* scratch; TYPE_1__ edev; } ;
struct enclosure_component {int number; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct scsi_device*,int,unsigned char*,int ) ;
 struct scsi_device* FUNC_1 (int ) ;

__attribute__((used)) static unsigned char *FUNC_2(struct enclosure_device *VAR_2,
          struct enclosure_component *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0, VAR_7 = VAR_3->number;
 struct scsi_device *VAR_8 = FUNC_1(VAR_2->edev.parent);
 struct ses_device *VAR_9 = VAR_2->scratch;
 unsigned char *VAR_10 = VAR_9->page1 + 12 + VAR_9->page1[11];
 unsigned char *VAR_11 = VAR_9->page2 + 8;

 FUNC_0(VAR_8, 2, VAR_9->page2, VAR_9->page2_len);

 for (VAR_4 = 0; VAR_4 < VAR_9->page1[10]; VAR_4++, VAR_10 += 4) {
  for (VAR_5 = 0; VAR_5 < VAR_10[1]; VAR_5++) {
   VAR_11 += 4;
   if (VAR_10[0] != VAR_1 &&
       VAR_10[0] != VAR_0)
    continue;
   if (VAR_6++ == VAR_7)
    return VAR_11;
  }
 }
 return ((void*)0);
}

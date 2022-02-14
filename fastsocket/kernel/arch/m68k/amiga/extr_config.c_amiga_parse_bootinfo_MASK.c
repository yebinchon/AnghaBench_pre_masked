
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long start; int end; } ;
struct zorro_dev {TYPE_1__ resource; int slotsize; int slotaddr; int rom; } ;
struct bi_record {unsigned long* data; int tag; } ;
struct ConfigDev {unsigned long cd_BoardSize; scalar_t__ cd_BoardAddr; int cd_SlotSize; int cd_SlotAddr; int cd_Rom; } ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (char*) ;
 struct zorro_dev* VAR_7 ;
 int VAR_8 ;

int FUNC_1(const struct bi_record *VAR_9)
{
 int VAR_10 = 0;
 const unsigned long *VAR_11 = VAR_9->data;

 switch (VAR_9->tag) {
 case 131:
  VAR_4 = *VAR_11;
  break;

 case 132:
  VAR_3 = *VAR_11;
  break;

 case 134:
  VAR_2 = *VAR_11;
  break;

 case 133:
  VAR_1 = *(const int *)VAR_11;
  break;

 case 128:
  VAR_6 = *(const unsigned char *)VAR_11;
  break;

 case 130:
  VAR_5 = *(const unsigned char *)VAR_11;
  break;

 case 135:
  break;

 case 129:

  break;

 default:
  VAR_10 = 1;
 }
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_ctl_info {unsigned int nr_csrows; TYPE_2__* csrows; int ue_count; } ;
struct TYPE_4__ {unsigned int nr_channels; TYPE_1__* channels; int ue_count; } ;
struct TYPE_3__ {char* label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct mem_ctl_info*,char*) ;
 int FUNC_3 (struct mem_ctl_info*,int ,char*,unsigned int,unsigned int,...) ;
 int FUNC_4 (char*,unsigned int,unsigned int,unsigned int,char*,char*) ;
 int FUNC_5 (char*,int,char*,char*) ;

void FUNC_6(struct mem_ctl_info *VAR_3,
   unsigned int VAR_4,
   unsigned int VAR_5,
   unsigned int VAR_6, char *VAR_7)
{
 int VAR_8 = VAR_0 * 4;
 char VAR_9[VAR_8 + 1];
 char *VAR_10 = VAR_9;
 int VAR_11;

 if (VAR_4 >= VAR_3->nr_csrows) {

  FUNC_3(VAR_3, VAR_2,
   "INTERNAL ERROR: row out of range (%d >= %d)\n",
   VAR_4, VAR_3->nr_csrows);
  FUNC_2(VAR_3, "INTERNAL ERROR");
  return;
 }

 if (VAR_5 >= VAR_3->csrows[VAR_4].nr_channels) {

  FUNC_3(VAR_3, VAR_2,
   "INTERNAL ERROR: channel-a out of range "
   "(%d >= %d)\n",
   VAR_5, VAR_3->csrows[VAR_4].nr_channels);
  FUNC_2(VAR_3, "INTERNAL ERROR");
  return;
 }

 if (VAR_6 >= VAR_3->csrows[VAR_4].nr_channels) {

  FUNC_3(VAR_3, VAR_2,
   "INTERNAL ERROR: channel-b out of range "
   "(%d >= %d)\n",
   VAR_6, VAR_3->csrows[VAR_4].nr_channels);
  FUNC_2(VAR_3, "INTERNAL ERROR");
  return;
 }

 VAR_3->ue_count++;
 VAR_3->csrows[VAR_4].ue_count++;


 VAR_11 = FUNC_5(VAR_10, VAR_8 + 1, "%s",
    VAR_3->csrows[VAR_4].channels[VAR_5].label);
 VAR_8 -= VAR_11;
 VAR_10 += VAR_11;
 VAR_11 = FUNC_5(VAR_10, VAR_8 + 1, "-%s",
    VAR_3->csrows[VAR_4].channels[VAR_6].label);

 if (FUNC_0())
  FUNC_3(VAR_3, VAR_1,
   "UE row %d, channel-a= %d channel-b= %d "
   "labels \"%s\": %s\n", VAR_4, VAR_5, VAR_6,
   VAR_9, VAR_7);

 if (FUNC_1())
  FUNC_4("UE row %d, channel-a= %d channel-b= %d "
   "labels \"%s\": %s\n", VAR_4, VAR_5,
   VAR_6, VAR_9, VAR_7);
}

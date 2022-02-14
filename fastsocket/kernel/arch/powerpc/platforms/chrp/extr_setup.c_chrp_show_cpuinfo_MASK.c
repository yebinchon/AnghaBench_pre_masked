
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int* VAR_4 ;
 char const** VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 struct device_node* FUNC_1 (char*) ;
 char* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct seq_file*,char*,...) ;
 int FUNC_5 (char const*,char*,int) ;

void FUNC_6(struct seq_file *VAR_8)
{
 int VAR_9, VAR_10;
 unsigned int VAR_11;
 struct device_node *VAR_12;
 const char *VAR_13 = "";

 VAR_12 = FUNC_1("/");
 if (VAR_12)
  VAR_13 = FUNC_2(VAR_12, "model", ((void*)0));
 FUNC_4(VAR_8, "machine\t\t: CHRP %s\n", VAR_13);


 if (VAR_13 && !FUNC_5(VAR_13, "IBM,LongTrail", 13)) {


  VAR_10 = (FUNC_0(VAR_7 + VAR_2)
      >>31) & 1;
  for (VAR_9 = 0; VAR_9 < (VAR_10 ? 4 : 6); VAR_9++) {
   VAR_11 = FUNC_0(VAR_7+
       VAR_1+
       VAR_9*4);
   if (!(VAR_11 & 1))
    continue;
   switch ((VAR_11>>8) & 0x1f) {
   case 0x1f:
    VAR_13 = "4 MB";
    break;
   case 0x1e:
    VAR_13 = "8 MB";
    break;
   case 0x1c:
    VAR_13 = "16 MB";
    break;
   case 0x18:
    VAR_13 = "32 MB";
    break;
   case 0x10:
    VAR_13 = "64 MB";
    break;
   case 0x00:
    VAR_13 = "128 MB";
    break;
   default:
    VAR_13 = "Reserved";
    break;
   }
   FUNC_4(VAR_8, "memory bank %d\t: %s %s\n", VAR_9, VAR_13,
       VAR_6[VAR_10 ? 1 : ((VAR_11>>1) & 3)]);
  }

  VAR_11 = FUNC_0(VAR_7+VAR_0);
  FUNC_4(VAR_8, "board l2\t: %s %s (%s)\n",
      VAR_4[(VAR_11>>7) & 3],
      VAR_5[(VAR_11>>2) & 3],
      VAR_3[VAR_11 & 3]);
 }
 FUNC_3(VAR_12);
}

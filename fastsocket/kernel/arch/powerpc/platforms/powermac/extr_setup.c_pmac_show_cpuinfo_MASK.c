
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct device_node* FUNC_0 (int *,char*) ;
 struct device_node* FUNC_1 (char*) ;
 struct device_node* FUNC_2 (int *,char*) ;
 void* FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (int ,int *,int ,long) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (struct seq_file*,char*,...) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(struct seq_file *VAR_6)
{
 struct device_node *VAR_7;
 const char *VAR_8;
 int VAR_9;
 int VAR_10;
 unsigned int VAR_11;
 char* VAR_12;

 VAR_10 = FUNC_5(VAR_0, ((void*)0),
        VAR_2, 0);
 VAR_11 = FUNC_5(VAR_0, ((void*)0),
        VAR_1, 0);
 if (FUNC_5(VAR_0, ((void*)0), VAR_3,
         (long) &VAR_12) != 0)
  VAR_12 = "Unknown";


 FUNC_6(VAR_6, "machine\t\t: ");
 VAR_7 = FUNC_1("/");
 if (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_3(VAR_7, "model", ((void*)0));
  if (VAR_8 != ((void*)0))
   FUNC_6(VAR_6, "%s\n", VAR_8);
  else
   FUNC_6(VAR_6, "PowerMac\n");
  VAR_8 = FUNC_3(VAR_7, "compatible", &VAR_9);
  if (VAR_8 != ((void*)0)) {
   FUNC_6(VAR_6, "motherboard\t:");
   while (VAR_9 > 0) {
    int VAR_13 = FUNC_7(VAR_8) + 1;
    FUNC_6(VAR_6, " %s", VAR_8);
    VAR_9 -= VAR_13;
    VAR_8 += VAR_13;
   }
   FUNC_6(VAR_6, "\n");
  }
  FUNC_4(VAR_7);
 } else
  FUNC_6(VAR_6, "PowerMac\n");


 FUNC_6(VAR_6, "detected as\t: %d (%s)\n", VAR_10, VAR_12);
 FUNC_6(VAR_6, "pmac flags\t: %08x\n", VAR_11);


 VAR_7 = FUNC_0(((void*)0), "l2-cache");
 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_2(((void*)0), "cache");
 if (VAR_7 != ((void*)0)) {
  const unsigned int *VAR_14 =
   FUNC_3(VAR_7, "i-cache-size", ((void*)0));
  const unsigned int *VAR_15 =
   FUNC_3(VAR_7, "d-cache-size", ((void*)0));
  FUNC_6(VAR_6, "L2 cache\t:");
  VAR_4 = 1;
  if (FUNC_3(VAR_7, "cache-unified", ((void*)0)) != 0 && VAR_15) {
   FUNC_6(VAR_6, " %dK unified", *VAR_15 / 1024);
  } else {
   if (VAR_14)
    FUNC_6(VAR_6, " %dK instruction", *VAR_14 / 1024);
   if (VAR_15)
    FUNC_6(VAR_6, "%s %dK data",
        (VAR_14? " +": ""), *VAR_15 / 1024);
  }
  VAR_8 = FUNC_3(VAR_7, "ram-type", ((void*)0));
  if (VAR_8)
   FUNC_6(VAR_6, " %s", VAR_8);
  FUNC_6(VAR_6, "\n");
  FUNC_4(VAR_7);
 }


 FUNC_6(VAR_6, "pmac-generation\t: %s\n",
     VAR_5 ? "NewWorld" : "OldWorld");
}

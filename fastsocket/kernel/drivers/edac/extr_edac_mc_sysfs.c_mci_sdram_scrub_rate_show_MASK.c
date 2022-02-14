
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int (* get_sdram_scrub_rate ) (struct mem_ctl_info*) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct mem_ctl_info*) ;

__attribute__((used)) static ssize_t FUNC_3(struct mem_ctl_info *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_3->get_sdram_scrub_rate)
  return -VAR_1;

 VAR_5 = VAR_3->get_sdram_scrub_rate(VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2, VAR_0, "Error reading scrub rate\n");
  return VAR_5;
 }

 return FUNC_1(VAR_4, "%d\n", VAR_5);
}

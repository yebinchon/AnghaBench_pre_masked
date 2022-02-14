
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int (* set_sdram_scrub_rate ) (struct mem_ctl_info*,unsigned long) ;} ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,unsigned long) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct mem_ctl_info*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct mem_ctl_info *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6 = 0;
 int VAR_7 = 0;

 if (!VAR_3->set_sdram_scrub_rate)
  return -VAR_1;

 if (FUNC_1(VAR_4, 10, &VAR_6) < 0)
  return -VAR_1;

 VAR_7 = VAR_3->set_sdram_scrub_rate(VAR_3, VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_2, VAR_0,
       "Error setting scrub rate to: %lu\n", VAR_6);
  return -VAR_1;
 }

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct som_hdr {scalar_t__ system_id; scalar_t__ a_magic; scalar_t__ version_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_0(struct som_hdr *VAR_9)
{
 int *VAR_10 = (int *)VAR_9;
 int VAR_11, VAR_12;

 if (VAR_9->system_id != VAR_6 &&
     VAR_9->system_id != VAR_7 &&
     VAR_9->system_id != VAR_8)
  return -VAR_0;

 if (VAR_9->a_magic != VAR_2 &&
     VAR_9->a_magic != VAR_3 &&
     VAR_9->a_magic != VAR_1)
  return -VAR_0;

 if (VAR_9->version_id != VAR_5 &&
     VAR_9->version_id != VAR_4)
  return -VAR_0;

 VAR_12 = 0;
 for (VAR_11=0; VAR_11<32; VAR_11++)
  VAR_12 ^= VAR_10[VAR_11];
 if (VAR_12 != 0)
  return -VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sclp_cpu_info {int dummy; } ;
struct TYPE_2__ {int length; int response_code; } ;
struct read_cpu_info_sccb {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct read_cpu_info_sccb*) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct sclp_cpu_info*,struct read_cpu_info_sccb*) ;

int FUNC_5(struct sclp_cpu_info *VAR_7)
{
 int VAR_8;
 struct read_cpu_info_sccb *VAR_9;

 if (!VAR_6)
  return -VAR_2;
 VAR_9 = (void *) FUNC_2(VAR_4 | VAR_3);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->header.length = sizeof(*VAR_9);
 VAR_8 = FUNC_0(VAR_5, VAR_9);
 if (VAR_8)
  goto out;
 if (VAR_9->header.response_code != 0x0010) {
  FUNC_3("readcpuinfo failed (response=0x%04x)\n",
      VAR_9->header.response_code);
  VAR_8 = -VAR_0;
  goto out;
 }
 FUNC_4(VAR_7, VAR_9);
out:
 FUNC_1((unsigned long) VAR_9);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int hclk_tns; } ;
struct s3c_cpufreq_config {TYPE_1__ freq; } ;
struct s3c2412_iobank_timing {int wstbrd; void* smbwstbrd; int wstwen; void* smbwstwen; int wstoen; void* smbwstoen; int wstwr; void* smbwstwr; int wstrd; void* smbwstrd; int idcy; void* smbidcyr; } ;


 void* FUNC_0 (int ,unsigned int,int*) ;

__attribute__((used)) static int FUNC_1(struct s3c_cpufreq_config *VAR_0,
        struct s3c2412_iobank_timing *VAR_1)
{
 unsigned int VAR_2 = VAR_0->freq.hclk_tns;
 int VAR_3 = 0;

 VAR_1->smbidcyr = FUNC_0(VAR_1->idcy, VAR_2, &VAR_3);
 VAR_1->smbwstrd = FUNC_0(VAR_1->wstrd, VAR_2, &VAR_3);
 VAR_1->smbwstwr = FUNC_0(VAR_1->wstwr, VAR_2, &VAR_3);
 VAR_1->smbwstoen = FUNC_0(VAR_1->wstoen, VAR_2, &VAR_3);
 VAR_1->smbwstwen = FUNC_0(VAR_1->wstwen, VAR_2, &VAR_3);
 VAR_1->smbwstbrd = FUNC_0(VAR_1->wstbrd, VAR_2, &VAR_3);

 return VAR_3;
}

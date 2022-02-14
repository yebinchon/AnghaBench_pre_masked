
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_isa_config_struc {int revision; int no_csns; int isa_rd_data_port; } ;
typedef int off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pnp_isa_config_struc*) ;
 int FUNC_1 (char*,int,char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, char **VAR_2, off_t VAR_3,
          int VAR_4, int *VAR_5, void *VAR_6)
{
 struct pnp_isa_config_struc VAR_7;

 if (FUNC_0(&VAR_7))
  return -VAR_0;
 return FUNC_1(VAR_1, VAR_4,
   "structure_revision %d\n"
   "number_of_CSNs %d\n"
   "ISA_read_data_port 0x%x\n",
   VAR_7.revision, VAR_7.no_csns, VAR_7.isa_rd_data_port);
}

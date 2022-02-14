
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u8 ;
struct pnp_bios_node {int size; int data; } ;
typedef int off_t ;
struct TYPE_2__ {int max_node_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pnp_bios_node*) ;
 struct pnp_bios_node* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_3 (long*,int,struct pnp_bios_node*) ;

__attribute__((used)) static int FUNC_4(char *VAR_4, char **VAR_5, off_t VAR_6,
     int VAR_7, int *VAR_8, void *VAR_9)
{
 struct pnp_bios_node *VAR_10;
 int VAR_11 = (long)VAR_9 >> 8;
 u8 VAR_12 = (long)VAR_9;
 int VAR_13;

 VAR_10 = FUNC_1(VAR_3.max_node_size, VAR_2);
 if (!VAR_10)
  return -VAR_1;
 if (FUNC_3(&VAR_12, VAR_11, VAR_10)) {
  FUNC_0(VAR_10);
  return -VAR_0;
 }
 VAR_13 = VAR_10->size - sizeof(struct pnp_bios_node);
 FUNC_2(VAR_4, VAR_10->data, VAR_13);
 FUNC_0(VAR_10);
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcb_table {size_t entries; struct dcb_output* entry; } ;
struct dcb_output {int index; } ;


 int FUNC_0 (struct dcb_output*,int ,int) ;

__attribute__((used)) static struct dcb_output *FUNC_1(struct dcb_table *VAR_0)
{
 struct dcb_output *VAR_1 = &VAR_0->entry[VAR_0->entries];

 FUNC_0(VAR_1, 0, sizeof(struct dcb_output));
 VAR_1->index = VAR_0->entries++;

 return VAR_1;
}

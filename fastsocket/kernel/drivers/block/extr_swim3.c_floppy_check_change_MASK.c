
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct floppy_state* private_data; } ;
struct floppy_state {int ejected; } ;



__attribute__((used)) static int FUNC_0(struct gendisk *VAR_0)
{
 struct floppy_state *VAR_1 = VAR_0->private_data;
 return VAR_1->ejected;
}

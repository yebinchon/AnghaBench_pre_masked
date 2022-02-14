
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int data; int size; } ;
struct nfs_inode {TYPE_1__ fh; } ;


 int FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static uint16_t FUNC_1(const void *VAR_0,
       void *VAR_1, uint16_t VAR_2)
{
 const struct nfs_inode *VAR_3 = VAR_0;
 uint16_t VAR_4;


 VAR_4 = VAR_3->fh.size;
 FUNC_0(VAR_1, VAR_3->fh.data, VAR_4);
 return VAR_4;
}

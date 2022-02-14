
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_data; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline struct ext4_extent_header *FUNC_1(struct inode *VAR_0)
{
 return (struct ext4_extent_header *) FUNC_0(VAR_0)->i_data;
}

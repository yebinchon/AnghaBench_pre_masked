
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_failure_record {scalar_t__ len; scalar_t__ start; } ;
struct inode {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct TYPE_2__ {struct extent_io_tree io_tree; struct extent_io_tree io_failure_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct extent_io_tree*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_2 (struct io_failure_record*) ;
 int FUNC_3 (struct extent_io_tree*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct io_failure_record *VAR_5,
    int VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 struct extent_io_tree *VAR_9 = &FUNC_0(VAR_4)->io_failure_tree;

 FUNC_3(VAR_9, VAR_5->start, 0);
 VAR_7 = FUNC_1(VAR_9, VAR_5->start,
    VAR_5->start + VAR_5->len - 1,
    VAR_2 | VAR_1, VAR_3);
 if (VAR_7)
  VAR_8 = VAR_7;

 if (VAR_6) {
  VAR_7 = FUNC_1(&FUNC_0(VAR_4)->io_tree, VAR_5->start,
     VAR_5->start + VAR_5->len - 1,
     VAR_0, VAR_3);
  if (VAR_7 && !VAR_8)
   VAR_8 = VAR_7;
 }

 FUNC_2(VAR_5);
 return VAR_8;
}

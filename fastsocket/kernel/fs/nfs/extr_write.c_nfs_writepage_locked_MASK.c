
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct nfs_pageio_descriptor {scalar_t__ pg_error; } ;
struct TYPE_4__ {int (* write_pageio_init ) (struct nfs_pageio_descriptor*,int ,int ,int *) ;} ;
struct TYPE_3__ {int host; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct page*,struct writeback_control*,struct nfs_pageio_descriptor*) ;
 int FUNC_2 (struct nfs_pageio_descriptor*) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,int ,int ,int *) ;
 int FUNC_4 (struct writeback_control*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_1, struct writeback_control *VAR_2)
{
 struct nfs_pageio_descriptor VAR_3;
 int VAR_4;

 FUNC_0(VAR_1->mapping->host)->write_pageio_init(&VAR_3,
         VAR_1->mapping->host,
         FUNC_4(VAR_2),
         &VAR_0);
 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);
 FUNC_2(&VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_3.pg_error < 0)
  return VAR_3.pg_error;
 return 0;
}

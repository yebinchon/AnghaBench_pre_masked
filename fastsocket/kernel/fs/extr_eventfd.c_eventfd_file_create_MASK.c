
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct eventfd_ctx {unsigned int count; int flags; int wqh; int kref; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct file* FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct file*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct file* FUNC_3 (char*,int *,struct eventfd_ctx*,int) ;
 int VAR_9 ;
 int FUNC_4 (struct eventfd_ctx*) ;
 int FUNC_5 (int *) ;
 struct eventfd_ctx* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

struct file *FUNC_8(unsigned int VAR_10, int VAR_11)
{
 struct file *VAR_12;
 struct eventfd_ctx *VAR_13;


 FUNC_0(VAR_0 != VAR_7);
 FUNC_0(VAR_2 != VAR_8);

 if (VAR_11 & ~VAR_1)
  return FUNC_1(-VAR_4);

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return FUNC_1(-VAR_5);

 FUNC_7(&VAR_13->kref);
 FUNC_5(&VAR_13->wqh);
 VAR_13->count = VAR_10;
 VAR_13->flags = VAR_11;

 VAR_12 = FUNC_3("[eventfd]", &VAR_9, VAR_13,
      VAR_11 & VAR_3);
 if (FUNC_2(VAR_12))
  FUNC_4(VAR_13);

 return VAR_12;
}

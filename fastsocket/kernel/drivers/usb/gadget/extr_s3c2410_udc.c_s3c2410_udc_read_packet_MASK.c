
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ actual; scalar_t__ length; } ;
struct s3c2410_request {TYPE_1__ req; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,unsigned int) ;
 int FUNC_1 (scalar_t__,int *,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_1, u8 *VAR_2,
  struct s3c2410_request *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5;

 VAR_5 = FUNC_0(VAR_3->req.length - VAR_3->req.actual, VAR_4);
 VAR_3->req.actual += VAR_5;

 FUNC_1(VAR_1 + VAR_0, VAR_2, VAR_5);
 return VAR_5;
}

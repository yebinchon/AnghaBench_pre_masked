
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int td; } ;
struct bio {int bi_rw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct thin_c *VAR_2, struct bio *VAR_3)
{
 return (VAR_3->bi_rw & (VAR_0 | VAR_1)) &&
  FUNC_0(VAR_2->td);
}

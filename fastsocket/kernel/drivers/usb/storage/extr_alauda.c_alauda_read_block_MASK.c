
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct us_data {int dummy; } ;
struct TYPE_2__ {unsigned int pagesize; } ;


 TYPE_1__ FUNC_0 (struct us_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct us_data*,int ,unsigned int,unsigned int,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_1, u16 VAR_2,
  unsigned int VAR_3, unsigned int VAR_4, unsigned char *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned int VAR_8 = FUNC_0(VAR_1).pagesize;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 != VAR_0)
  return VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  int VAR_9 = VAR_6 * VAR_8;
  int VAR_10 = VAR_6 * (VAR_8 + 64);
  FUNC_2(VAR_5 + VAR_9, VAR_5 + VAR_10, VAR_8);
 }

 return VAR_7;
}

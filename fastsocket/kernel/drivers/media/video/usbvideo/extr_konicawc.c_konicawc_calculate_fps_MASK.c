
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {struct konicawc* user_data; } ;
struct konicawc {size_t size; size_t speed; } ;


 int** VAR_0 ;

__attribute__((used)) static int FUNC_0(struct uvd *VAR_1)
{
 struct konicawc *VAR_2 = VAR_1->user_data;
 return VAR_0[VAR_2->size][VAR_2->speed]/3;
}

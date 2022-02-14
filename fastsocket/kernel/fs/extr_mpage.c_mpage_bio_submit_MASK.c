
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_end_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct bio*) ;

__attribute__((used)) static struct bio *FUNC_1(int VAR_3, struct bio *VAR_4)
{
 VAR_4->bi_end_io = VAR_1;
 if (VAR_3 == VAR_0)
  VAR_4->bi_end_io = VAR_2;
 FUNC_0(VAR_3, VAR_4);
 return ((void*)0);
}

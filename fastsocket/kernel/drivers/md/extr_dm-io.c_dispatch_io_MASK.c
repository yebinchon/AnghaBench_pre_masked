
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
struct dpages {int dummy; } ;
struct dm_io_region {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct io*,int ,int ) ;
 int FUNC_2 (int,int,struct dm_io_region*,struct dpages*,struct io*) ;

__attribute__((used)) static void FUNC_3(int VAR_4, unsigned int VAR_5,
   struct dm_io_region *VAR_6, struct dpages *VAR_7,
   struct io *VAR_8, int VAR_9)
{
 int VAR_10;
 struct dpages VAR_11 = *VAR_7;

 FUNC_0(VAR_5 > VAR_3);

 if (VAR_9)
  VAR_4 |= (1 << VAR_1) | (1 << VAR_2);





 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  *VAR_7 = VAR_11;
  if (VAR_6[VAR_10].count || (VAR_4 & VAR_0))
   FUNC_2(VAR_4, VAR_10, VAR_6 + VAR_10, VAR_7, VAR_8);
 }





 FUNC_1(VAR_8, 0, 0);
}

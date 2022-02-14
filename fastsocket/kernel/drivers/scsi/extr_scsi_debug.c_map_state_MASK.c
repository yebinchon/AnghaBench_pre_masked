
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sector_t ;


 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ,int ,unsigned int) ;
 unsigned int FUNC_2 (int ,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static unsigned int FUNC_4(sector_t VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 sector_t VAR_9, VAR_10, VAR_11;

 VAR_6 = VAR_3;
 VAR_7 = VAR_6 - VAR_2;
 VAR_9 = VAR_4 + VAR_7;
 FUNC_0(VAR_9, VAR_6);

 VAR_8 = FUNC_3(VAR_9, VAR_1);

 if (VAR_8)
  VAR_10 = FUNC_2(VAR_1, VAR_0, VAR_9);
 else
  VAR_10 = FUNC_1(VAR_1, VAR_0, VAR_9);

 VAR_11 = VAR_10 * VAR_6 - VAR_2;
 *VAR_5 = VAR_11 - VAR_4;

 return VAR_8;
}

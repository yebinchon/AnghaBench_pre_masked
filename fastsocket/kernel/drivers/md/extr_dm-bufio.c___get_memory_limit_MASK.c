
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {unsigned long sectors_per_block_bits; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dm_bufio_client *VAR_7,
          unsigned long *VAR_8,
          unsigned long *VAR_9)
{
 unsigned long VAR_10;

 if (FUNC_0(VAR_3) != VAR_4) {
  FUNC_2(&VAR_6);
  FUNC_1();
  FUNC_3(&VAR_6);
 }

 VAR_10 = VAR_5 >>
    (VAR_7->sectors_per_block_bits + VAR_2);

 if (VAR_10 < VAR_0)
  VAR_10 = VAR_0;

 *VAR_9 = VAR_10;
 *VAR_8 = VAR_10 * VAR_1 / 100;
}

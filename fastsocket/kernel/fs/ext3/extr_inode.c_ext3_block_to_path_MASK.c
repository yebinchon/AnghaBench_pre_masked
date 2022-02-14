
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4,
   long VAR_5, int VAR_6[4], int *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_4->i_sb);
 int VAR_9 = FUNC_1(VAR_4->i_sb);
 const long VAR_10 = VAR_2,
  VAR_11 = VAR_8,
  VAR_12 = (1 << (VAR_9 * 2));
 int VAR_13 = 0;
 int VAR_14 = 0;

 if (VAR_5 < 0) {
  FUNC_2 (VAR_4->i_sb, "ext3_block_to_path", "block < 0");
 } else if (VAR_5 < VAR_10) {
  VAR_6[VAR_13++] = VAR_5;
  VAR_14 = VAR_10;
 } else if ( (VAR_5 -= VAR_10) < VAR_11) {
  VAR_6[VAR_13++] = VAR_1;
  VAR_6[VAR_13++] = VAR_5;
  VAR_14 = VAR_8;
 } else if ((VAR_5 -= VAR_11) < VAR_12) {
  VAR_6[VAR_13++] = VAR_0;
  VAR_6[VAR_13++] = VAR_5 >> VAR_9;
  VAR_6[VAR_13++] = VAR_5 & (VAR_8 - 1);
  VAR_14 = VAR_8;
 } else if (((VAR_5 -= VAR_12) >> (VAR_9 * 2)) < VAR_8) {
  VAR_6[VAR_13++] = VAR_3;
  VAR_6[VAR_13++] = VAR_5 >> (VAR_9 * 2);
  VAR_6[VAR_13++] = (VAR_5 >> VAR_9) & (VAR_8 - 1);
  VAR_6[VAR_13++] = VAR_5 & (VAR_8 - 1);
  VAR_14 = VAR_8;
 } else {
  FUNC_2(VAR_4->i_sb, "ext3_block_to_path", "block > big");
 }
 if (VAR_7)
  *VAR_7 = VAR_14 - 1 - (VAR_5 & (VAR_8 - 1));
 return VAR_13;
}

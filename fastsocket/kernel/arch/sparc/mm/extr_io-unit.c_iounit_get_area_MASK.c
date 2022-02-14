
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iounit_struct {unsigned long* rotor; unsigned long* limit; int * page_table; int bmap; } ;
typedef int iopte_t ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,unsigned long,int) ;
 int FUNC_7 (unsigned long,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static unsigned long FUNC_9(struct iounit_struct *VAR_4, unsigned long VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;
 iopte_t VAR_14;

        VAR_10 = ((VAR_5 & ~VAR_1) + VAR_6 + (VAR_3-1)) >> VAR_2;


 switch (VAR_10) {
 case 1: VAR_7 = 0x0231; break;
 case 2: VAR_7 = 0x0132; break;
 default: VAR_7 = 0x0213; break;
 }

 FUNC_0(("iounit_get_area(%08lx,%d[%d])=", VAR_5, VAR_6, VAR_10));

next: VAR_8 = (VAR_7 & 15);
 VAR_11 = VAR_4->rotor[VAR_8 - 1];
 VAR_13 = VAR_4->limit[VAR_8];
 VAR_12 = VAR_11;
nexti: VAR_12 = FUNC_4(VAR_4->bmap, VAR_13, VAR_12);
 if (VAR_12 + VAR_10 > VAR_13) {
  if (VAR_13 != VAR_11) {
   VAR_13 = VAR_11;
   VAR_12 = VAR_4->limit[VAR_8 - 1];
   goto nexti;
  }
  VAR_7 >>= 4;
  if (!(VAR_7 & 15))
   FUNC_6("iounit_get_area: Couldn't find free iopte slots for (%08lx,%d)\n", VAR_5, VAR_6);
  goto next;
 }
 for (VAR_9 = 1, VAR_12++; VAR_9 < VAR_10; VAR_9++)
  if (FUNC_8(VAR_12++, VAR_4->bmap))
   goto nexti;
 VAR_4->rotor[VAR_8 - 1] = (VAR_12 < VAR_13) ? VAR_12 : VAR_4->limit[VAR_8 - 1];
 VAR_12 -= VAR_10;
 VAR_14 = FUNC_1(FUNC_3(VAR_5 & VAR_1));
 VAR_5 = VAR_0 + (VAR_12 << VAR_2) + (VAR_5 & ~VAR_1);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++, VAR_14 = FUNC_2(FUNC_5(VAR_14) + 0x100), VAR_12++) {
  FUNC_7(VAR_12, VAR_4->bmap);
  VAR_4->page_table[VAR_12] = VAR_14;
 }
 FUNC_0(("%08lx\n", VAR_5));
 return VAR_5;
}

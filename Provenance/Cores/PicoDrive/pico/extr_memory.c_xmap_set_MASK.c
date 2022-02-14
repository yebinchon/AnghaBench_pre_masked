
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uptr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int volatile,...) ;

__attribute__((used)) static void FUNC_1(uptr *VAR_3, int VAR_4, int VAR_5, int VAR_6,
    const void *VAR_7, int VAR_8)
{



  volatile

  uptr VAR_9 = (uptr)VAR_7;
  int VAR_10 = (1 << VAR_4) - 1;
  int VAR_11;

  if ((VAR_5 & VAR_10) != 0 || (VAR_6 & VAR_10) != VAR_10) {
    FUNC_0(VAR_1|VAR_0, "xmap_set: tried to map bad range: %06x-%06x",
      VAR_5, VAR_6);
    return;
  }

  if (VAR_9 & 1) {
    FUNC_0(VAR_1|VAR_0, "xmap_set: ptr is not aligned: %08lx", VAR_9);
    return;
  }

  if (!VAR_8)
    VAR_9 -= VAR_5;

  for (VAR_11 = VAR_5 >> VAR_4; VAR_11 <= VAR_6 >> VAR_4; VAR_11++) {
    VAR_3[VAR_11] = VAR_9 >> 1;
    if (VAR_8)
      VAR_3[VAR_11] |= VAR_2;
  }
}

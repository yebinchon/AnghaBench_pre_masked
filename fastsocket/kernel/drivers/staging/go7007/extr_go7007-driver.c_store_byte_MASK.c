
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct go7007_buffer {scalar_t__ bytesused; unsigned int offset; int * pages; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct go7007_buffer *VAR_3, u8 VAR_4)
{
 if (VAR_3 != ((void*)0) && VAR_3->bytesused < VAR_0) {
  unsigned int VAR_5 = VAR_3->offset >> VAR_2;
  unsigned int VAR_6 = VAR_3->offset & ~VAR_1;

  *((u8 *)FUNC_0(VAR_3->pages[VAR_5]) + VAR_6) = VAR_4;
  ++VAR_3->offset;
  ++VAR_3->bytesused;
 }
}

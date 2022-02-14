
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_deflate_state {scalar_t__ w_size; int unit; int debug; int mru; int strm; scalar_t__ seqno; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_5, unsigned char *VAR_6, int VAR_7,
    int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct ppp_deflate_state *VAR_12 = (struct ppp_deflate_state *) VAR_5;

 if (VAR_7 < VAR_0
     || (VAR_6[0] != VAR_1 && VAR_6[0] != VAR_2)
     || VAR_6[1] != VAR_0
     || FUNC_0(VAR_6[2]) != VAR_4
     || FUNC_1(VAR_6[2]) != VAR_12->w_size
     || VAR_6[3] != VAR_3)
  return 0;

 VAR_12->seqno = 0;
 VAR_12->unit = VAR_8;
 VAR_12->debug = VAR_11;
 VAR_12->mru = VAR_10;

 FUNC_2(&VAR_12->strm);

 return 1;
}

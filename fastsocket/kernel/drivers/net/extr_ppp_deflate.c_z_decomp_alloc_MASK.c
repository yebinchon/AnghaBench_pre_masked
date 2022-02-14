
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * workspace; int * next_out; } ;
struct ppp_deflate_state {int w_size; TYPE_1__ strm; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned char) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int * FUNC_2 (int ,int) ;
 struct ppp_deflate_state* FUNC_3 (int,int) ;
 int FUNC_4 (struct ppp_deflate_state*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void *FUNC_7(unsigned char *VAR_10, int VAR_11)
{
 struct ppp_deflate_state *VAR_12;
 int VAR_13;

 if (VAR_11 != VAR_0
     || (VAR_10[0] != VAR_1 && VAR_10[0] != VAR_2)
     || VAR_10[1] != VAR_0
     || FUNC_0(VAR_10[2]) != VAR_5
     || VAR_10[3] != VAR_3)
  return ((void*)0);
 VAR_13 = FUNC_1(VAR_10[2]);
 if (VAR_13 < VAR_6 || VAR_13 > VAR_4)
  return ((void*)0);

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_7);
 if (VAR_12 == ((void*)0))
  return ((void*)0);

 VAR_12->w_size = VAR_13;
 VAR_12->strm.next_out = ((void*)0);
 VAR_12->strm.workspace = FUNC_2(FUNC_6(),
     VAR_7|VAR_9);
 if (VAR_12->strm.workspace == ((void*)0))
  goto out_free;

 if (FUNC_5(&VAR_12->strm, -VAR_13) != VAR_8)
  goto out_free;
 return (void *) VAR_12;

out_free:
 FUNC_4(VAR_12);
 return ((void*)0);
}

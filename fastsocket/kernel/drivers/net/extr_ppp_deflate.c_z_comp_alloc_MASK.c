
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * workspace; int * next_in; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct ppp_deflate_state* FUNC_2 (int,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct ppp_deflate_state*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,scalar_t__,int,int,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void *FUNC_7(unsigned char *VAR_11, int VAR_12)
{
 struct ppp_deflate_state *VAR_13;
 int VAR_14;

 if (VAR_12 != VAR_0
     || (VAR_11[0] != VAR_1 && VAR_11[0] != VAR_2)
     || VAR_11[1] != VAR_0
     || FUNC_0(VAR_11[2]) != VAR_5
     || VAR_11[3] != VAR_3)
  return ((void*)0);
 VAR_14 = FUNC_1(VAR_11[2]);
 if (VAR_14 < VAR_6 || VAR_14 > VAR_4)
  return ((void*)0);

 VAR_13 = FUNC_2(sizeof(*VAR_13),
           VAR_7);
 if (VAR_13 == ((void*)0))
  return ((void*)0);

 VAR_13->strm.next_in = ((void*)0);
 VAR_13->w_size = VAR_14;
 VAR_13->strm.workspace = FUNC_3(FUNC_6());
 if (VAR_13->strm.workspace == ((void*)0))
  goto out_free;

 if (FUNC_5(&VAR_13->strm, VAR_8,
    VAR_5, -VAR_14, 8, VAR_9)
     != VAR_10)
  goto out_free;
 return (void *) VAR_13;

out_free:
 FUNC_4(VAR_13);
 return ((void*)0);
}

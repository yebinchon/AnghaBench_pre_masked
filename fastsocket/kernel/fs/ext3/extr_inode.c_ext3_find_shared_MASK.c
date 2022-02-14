
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef scalar_t__ __le32 ;
struct TYPE_8__ {scalar_t__ b_data; } ;
struct TYPE_7__ {TYPE_6__* bh; scalar_t__* p; int key; } ;
typedef TYPE_1__ Indirect ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_1__* FUNC_2 (struct inode*,int,int*,TYPE_1__*,int*) ;

__attribute__((used)) static Indirect *FUNC_3(struct inode *VAR_0, int VAR_1,
   int VAR_2[4], Indirect VAR_3[4], __le32 *VAR_4)
{
 Indirect *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 *VAR_4 = 0;

 for (VAR_7 = VAR_1; VAR_7 > 1 && !VAR_2[VAR_7-1]; VAR_7--)
  ;
 VAR_5 = FUNC_2(VAR_0, VAR_7, VAR_2, VAR_3, &VAR_8);

 if (!VAR_5)
  VAR_5 = VAR_3 + VAR_7-1;




 if (!VAR_5->key && *VAR_5->p)

  goto no_top;
 for (VAR_6=VAR_5; VAR_6>VAR_3 && FUNC_0((__le32*)VAR_6->bh->b_data,VAR_6->p); VAR_6--)
  ;






 if (VAR_6 == VAR_3 + VAR_7 - 1 && VAR_6 > VAR_3) {
  VAR_6->p--;
 } else {
  *VAR_4 = *VAR_6->p;




 }


 while(VAR_5 > VAR_6) {
  FUNC_1(VAR_5->bh);
  VAR_5--;
 }
no_top:
 return VAR_5;
}

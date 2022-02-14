
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* buf_t ;
struct TYPE_8__ {int bufs_eblk; } ;
struct TYPE_7__ {int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_1__* FUNC_4 (int ,int ,int*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

buf_t
FUNC_7(int VAR_6)
{
 buf_t VAR_7 = ((void*)0);
 int VAR_8 = VAR_0;

 do {
  FUNC_5(VAR_3);

  VAR_7 = FUNC_4(0, 0, &VAR_8);
 } while (VAR_7 == ((void*)0));

 FUNC_0(VAR_7->b_flags, (VAR_2|VAR_1));






 FUNC_3(VAR_7, &VAR_5);
 VAR_4.bufs_eblk++;

 FUNC_6(VAR_3);

 FUNC_1(VAR_7, VAR_6);

 return (VAR_7);
}

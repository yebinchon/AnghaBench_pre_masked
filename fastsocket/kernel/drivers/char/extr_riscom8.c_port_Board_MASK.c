
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riscom_port {int dummy; } ;
struct riscom_board {int dummy; } ;


 size_t FUNC_0 (struct riscom_port const*) ;
 struct riscom_board* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct riscom_board *FUNC_1(struct riscom_port const *VAR_2)
{
 return &VAR_0[FUNC_0(VAR_2 - VAR_1)];
}

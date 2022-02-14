
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {int iov_len; int iov_base; } ;
typedef int __u32 ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline __u32 FUNC_1( __u32 VAR_0, struct kvec *VAR_1, unsigned int VAR_2 )
{
 unsigned int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_0 = FUNC_0( VAR_0, VAR_1[VAR_3].iov_base, VAR_1[VAR_3].iov_len );
 return VAR_0;
}

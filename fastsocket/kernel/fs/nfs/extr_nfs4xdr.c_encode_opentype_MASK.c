
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_openargs {int open_flags; int claim; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xdr_stream*,struct nfs_openargs const*) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_4, const struct nfs_openargs *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_3(VAR_4, 4);
 switch (VAR_5->open_flags & VAR_3) {
 case 0:
  *VAR_6 = FUNC_1(VAR_2);
  break;
 default:
  FUNC_0(VAR_5->claim != VAR_0);
  *VAR_6 = FUNC_1(VAR_1);
  FUNC_2(VAR_4, VAR_5);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct rchan_buf {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char const*,int ,struct dentry*,struct rchan_buf*,int *) ;
 int VAR_0 ;

__attribute__((used)) static struct dentry *FUNC_1(const char *VAR_1,
           struct dentry *VAR_2,
           umode_t VAR_3,
           struct rchan_buf *VAR_4,
           int *VAR_5)
{
 struct dentry *VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_2, VAR_4,
           &VAR_0);
 *VAR_5 = 1;
 return VAR_6;
}
